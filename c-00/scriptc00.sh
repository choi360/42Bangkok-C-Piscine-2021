# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    scriptc00.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvikanai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 08:23:30 by tvikanai          #+#    #+#              #
#    Updated: 2021/10/26 10:53:44 by tvikanai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
echo '\n'
echo '=======>>>>> Start......'
echo '\n'
echo '============Norminette ====================='
echo '\n'
norminette .

echo '\n'
echo '=========== Copy main.c process ==========='
echo '\n'
cp mainex00.c ./ex00
cp mainex01.c ./ex01
cp mainex02.c ./ex02
cp mainex03.c ./ex03
cp mainex04.c ./ex04
cp mainex05.c ./ex05
cp mainex06.c ./ex06
cp mainex07.c ./ex07
cp mainex08.c ./ex08
echo '======>>>>>  Copied '

echo '\n'
echo '============ Moulinette compiles============'
echo '\n'
gcc -o ex00.out -Wall -Werror -Wextra ./ex00/mainex00.c
gcc -o ex01.out -Wall -Werror -Wextra ./ex01/mainex01.c
gcc -o ex02.out -Wall -Werror -Wextra ./ex02/mainex02.c
gcc -o ex03.out -Wall -Werror -Wextra ./ex03/mainex03.c
gcc -o ex04.out -Wall -Werror -Wextra ./ex04/mainex04.c
gcc -o ex05.out -Wall -Werror -Wextra ./ex05/mainex05.c
gcc -o ex06.out -Wall -Werror -Wextra ./ex06/mainex06.c
gcc -o ex07.out -Wall -Werror -Wextra ./ex07/mainex07.c
gcc -o ex08.out -Wall -Werror -Wextra ./ex08/mainex08.c

echo '\n'
echo '============ Answer of Each Exercise ============' 
echo '\n'
echo '==> Answer of ex00 Must be: c \n'  
./ex00.out
echo '\n'
echo '==> Answer of ex01 Must be: abcdefghijklmnopqrstuvwxyz \n'  
./ex01.out
echo '\n'
echo '==> Answer of ex02 : \n'  
./ex02.out
echo '\n'
echo '==> Answer of ex03 : \n'  
./ex03.out
echo '\n'
echo '==> Answer of ex04 Must be: PNP \n'  
./ex04.out
echo '\n'
echo '==> Answer of ex05 Must be : 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$> \n'  
./ex05.out | cat -e
echo '\n'
echo '==> Answer of ex06 Must be : 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$> \n'  
./ex06.out | cat -e
echo '\n'
echo '==> Answer of ex07 Must be : 42  \n'  
./ex07.out | cat -e
echo '\n'
echo '==> Answer of ex08 : 01, 02, 03, ..., 09, 12, ..., 79, 89 \n'  
./ex08.out | cat -e
echo '\n'
echo '================= End od Answer =================='
echo '\n'
echo 'Scripted by tvikanai : Mod'
echo 'Build : scriptc00.sh ver.00 : 26/10/2021'
echo '\n'
echo 'Anyone can modify and please refer "Original by: tvikanai"'
echo '\n'



