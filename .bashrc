nw()
{
    if [ -e $1 ]
    then
	echo "the file exist"
    else
	echo "#!/bin/bash" > $1
	emacs $1
	fi
}
