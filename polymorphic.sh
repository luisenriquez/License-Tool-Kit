#!/bin/sh
g++ -o polymorphic polymorphic1.cpp
mkdir ./license-output
./polymorphic | tee ./license-output/polymorphic-license.txt
pdflatex license-output/polymorphic-license.txt
mv polymorphic-license.pdf ./license-output
md5sum ./license-output/polymorphic-license.pdf  | tee ./license-output/md5sum.txt
sha1sum ./license-output/polymorphic-license.pdf | tee ./license-output/sha1sum.txt

rm *.aux
rm *.log
rm ./license-output/polymorphic-license.txt
