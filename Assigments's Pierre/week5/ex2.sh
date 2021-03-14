#/bin/bash

# Some variables
file="integer.txt"	# file to read
lock="${file}.lock"	# lock file

# re='[+-]?[0-9]+$'	# regression to searching for integer
num=0			# variable to save integer read


# Check if file exist
if [ ! -f $file ]	# If file does not exit
then
	echo 0 > $file	# then create file with 0
fi


# Check if there is another process using this file
while [ -f $lock ]	# while lock file exists
do
	:		# do nothing
done


# File is ready, start reading and appending
ln -s $file $lock	# creat a lock file 

num=$(grep  -Eo '^[0-9]+$' $file | tail -1) # store last line in variable num
num=$((num+1))
		
echo $num >> $file	# append num to file
	
rm $lock		# remove lock file
cat integer.txt
exit 0
