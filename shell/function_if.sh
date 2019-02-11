set -x
function sum()
{
echo `expr $1 + $2`
}

if [ $(sum 4 1) -ne '5' ]; then
        echo "not equals 5"
else
        echo "equals 5"
fi



function warFileCount(){
    local count=`find /home/work/deploy -type f -name *.war|wc -l`
    echo $count
}



if [ $(warFileCount) -eq 0 ];then
echo "war file count 0"
else
echo "war file count NNNNNNNNNNNNNNNNOT 0"
fi

