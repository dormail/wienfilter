# bash script for the wienfilter program

clear
rm -rf a.out variables.csv wienfilter.csv

make
./a.out
python plot.py
