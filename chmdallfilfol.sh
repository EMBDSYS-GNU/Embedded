echo "#Author:hsein elzein
#topic:chmod automatically to a folder contains multiple files and folders
#date":Wed Sep 23 12:07:49 AM EEST 2026
echo  -e "   "
#!/bin/bash
DIR="$1"
#   cmd=`ls  $DIR`
#   if [ -d ${cmd} ]
  if [ -z "$(ls -A "$DIR")" ]
then
    echo " Directory is Empty"
else
 for item in "$DIR"/*; do  
    data="$item"
    echo `ls -ld ${data}`
    echo `sudo chmod 777 ${data}`
    done
fi
