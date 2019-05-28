#include"Eigen\Dense"

#include <iostream>
#include <ctime>
using namespace std;

#define MATRIX_SIZE 50
int main()
{
        Eigen::Matrix<float,2,3> matrix_23;
        Eigen::Vector3d v_3d;
        Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();
        Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > matrix_dynamic;
        Eigen::MatrixXd matrix_x;

        matrix_23 << 1, 2, 3, 4, 5, 6;
        cout<<matrix_23<<endl;

        for (int i=0; i<1; i++)
             for (int j=0; j<2; j++)
                    cout<<matrix_23(i,j)<<endl;

        v_3d << 1,2,3;

        cout<<"v_3d: \n"<<v_3d<<endl;
        //Eigen::Matrix<double, 2, 1> result_wrong_type = matrix_23 * v_3d;
        matrix_33 = Eigen::Matrix3d::Random();
        cout << matrix_33 << endl << endl;

         cout << matrix_33.transpose() << endl; //转置
         cout << matrix_33.sum() << endl; //各元素和
         cout << matrix_33.trace() << endl; //迹
         cout << 10*matrix_33 << endl; //数乘
         cout << matrix_33.inverse() << endl; //逆
         cout << matrix_33.determinant() << endl; //行列式

         Eigen::SelfAdjointEigenSolver<Eigen::Matrix3d> eigen_solver ( matrix_33.transpose()*matrix_33 );
        cout << "Eigen values = " << eigen_solver.eigenvalues() << endl;
        cout << "Eigen vectors = " << eigen_solver.eigenvectors() << endl;

        Eigen::Matrix< double, MATRIX_SIZE, MATRIX_SIZE > matrix_NN;
        matrix_NN = Eigen::MatrixXd::Random( MATRIX_SIZE, MATRIX_SIZE );
        Eigen::Matrix< double, MATRIX_SIZE, 1> v_Nd;
        v_Nd = Eigen::MatrixXd::Random( MATRIX_SIZE,1 );


     clock_t time_stt = clock(); // 计时
     // 直接求逆
     Eigen::Matrix<double,MATRIX_SIZE,1> x = matrix_NN.inverse()*v_Nd;

     cout <<"time use in normal invers is " << 1000* (clock() - time_stt)/(double)CLOCKS_PER_SEC << "ms"<< endl;

     // 通常用矩阵分解来求，例如 QR 分解，速度会快很多
     time_stt = clock();
     x = matrix_NN.colPivHouseholderQr().solve(v_Nd);
     cout <<"time use in Qr compsition is " <<1000* (clock() - time_stt)/(double)CLOCKS_PER_SEC <<"ms"<< endl;
        

        return 0;
}