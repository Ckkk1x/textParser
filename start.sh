echo -e "\e[35m<--------------- STARTED --------------->\e[0m"
make all
gcc main.c petlib.a
echo -e "\e[33m<--------------- <<< PROGRAM EXECUTION >>> --------------->\e[0m"
./a.out
echo -e "\e[33m<--------------- XXX PROGRAM HAVE FINISHED XXX --------------->\e[0m"
make fclean
rm -f a.out
echo -e "\e[35m<--------------- FINISHED --------------->\e[0m"