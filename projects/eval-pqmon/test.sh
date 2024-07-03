export MAXIM_LIBRARIES=/home/robi/MaximSDK/Libraries
rm -rf build
make reset
bash ./ci/a
make -j8
# make run
