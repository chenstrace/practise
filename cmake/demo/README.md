因为没有cmake clean这种命令，但是可以用以下方法来“实现”

mkdir build
cd build
cmake ..

当需要"cmake clean"时，只需要rm -rf build就可以了
