# CURDIR=`/bin/pwd`
# BASEDIR=$(dirname $0)
ABSPATH=$(readlink -f $0)
ABSDIR=$(dirname $ABSPATH)

# echo "CURDIR is $CURDIR"
# echo "BASEDIR is $BASEDIR"
# echo "ABSPATH is $ABSPATH"
echo "ABSDIR is $ABSDIR"
SRC_DIR=$ABSDIR/proto
DST_DIR=$ABSDIR/protobuf_generated
protoc -I=$SRC_DIR --cpp_out=$DST_DIR $SRC_DIR/store.proto
if [ $? != 0 ];then
echo "Protobuf generate failed!"
else
echo "Protobuf generate sucess! 
Generated Files are follows :"
ls -al $DST_DIR
fi

