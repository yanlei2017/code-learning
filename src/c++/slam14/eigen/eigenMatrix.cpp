#include<iostream>
#include<ctime>
using namespace std;


#include<Eigen/Core>
#include<Eigen/Dense>
using namespace Eigen;
#define MATRIX_SIZE 50

int main(int argc,char * argv)
{
    Eigen::Matrix<float,2,3> matrix_23;
    Eigen::Vector3d v_3d;
    Eigen::Matrix3d matrix_33 =Eigen::Matrix3d::Zero();
    Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> matrix_dynamic;
    Eigen::MatrixXd matrix_x;
    matrix_23<<1,2,3,4,5,6;
    cout<<matrix_23<<endl;
        for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<matrix_23(i,j)<<endl;
        }
    }
    v_3d<<3,2,1;
    // Eigen::Matrix<double,2,1> result_wrong_type = matrix_23*v_3d;
    Eigen::Matrix<double,2,1> result=matrix_23.cast<double>()*v_3d;//double转换为float
    cout<<result<<endl;
    Eigen::Matrix2d m = Eigen::Matrix2d::Constant(1.2);//给矩阵每个元素赋值
    cout<<m<<endl;
    //Matrix<double,2,1> result_wrong_dimension = matrix_23.cast<double>() *v_3d;
    matrix_33=Matrix3d::Random();
    cout<<matrix_33<<endl;
    cout<<matrix_33.transpose()<<endl;
    cout<<matrix_33.sum()<<endl;
    cout<<matrix_33.trace()<<endl;
    cout<<matrix_33 * 10 <<endl;
    cout<<matrix_33.inverse()<<endl;
    cout<<matrix_33.determinant()<<endl;
    SelfAdjointEigenSolver<Matrix3d> eigen_solver (matrix_33.transpose() * matrix_33);
    cout<<"eigen values = \n"<<eigen_solver.eigenvalues()<<endl;
    cout<<"eigen vectors = \n"<<eigen_solver.eigenvectors()<<endl;
    Eigen::Matrix<double,MATRIX_SIZE,MATRIX_SIZE> matrix_NN;
    matrix_NN = MatrixXd::Random(MATRIX_SIZE,MATRIX_SIZE);
    Matrix<double,MATRIX_SIZE,1> v_Nd;
    v_Nd=MatrixXd::Random(MATRIX_SIZE,1);
    
    clock_t time_set=clock();
    Matrix<double,MATRIX_SIZE,1> x=matrix_NN.inverse() * v_Nd;
    cout<<"time use in normal inverse is "<<1000*(clock() - time_set) / (double)CLOCKS_PER_SEC <<"ms"<<endl;
    
    time_set=clock();
    x=matrix_NN.colPivHouseholderQr().solve(v_Nd);
    cout <<"time use in QR composition is "<<1000*(clock() - time_set) / (double )CLOCKS_PER_SEC<<"ms"<<endl;
    return 0;




}
