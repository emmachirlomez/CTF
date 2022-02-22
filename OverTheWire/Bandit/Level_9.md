## Level 9

how to find it:
* sort data.txt | uniq -u

the password for next level: UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

level 10: 
    how to do it: strings data.txt | grep '==='
    password: truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
level 11: 
    how to do it: base64 -d < data.txt
    password: IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
level 12: 
    how to do it: tr n-za-mN-ZA-M a-zA-Z < data.txt
    password: 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
level 13: 
    how to do it: cd $(mktemp -d), cp ~/data.txt ., xxd -r data.txt > password.txt, mv password.txt password.gz, gunzip password.gz, bunzip2 password, mv password.out password.gz, gunzip password.gz, tar -xf password, tar -xf data5.bin, tar -xf data6.bin, tar -xf data8.bin, mv data8.bin data8.gz, gunzip data8.gz, cat data8
    password: 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
level 14: 
    how to do it: ssh -i sshkey.private bandit14@localhost, cat /etc/bandit_pass/bandit14
    password: 4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
level 15: 
    how to do it: nc localhost 30000
    password: BfMYroe26WYalil77FoDi9qh59eK5xNr
level 16: 
    how to do it: openssl s_client -connect localhost:30001
    password: cluFn7wTiGryunymYOu4RcffSxQluehd
level 17: 
    how to do it: nmap -p 31000-32000 localhost, openssl s_client -connect localhost:31790, vim bandit17.key, chmod 600 bandit17.key
    password:  bandit17.key or xLYVMN9WE5zQ5vHacb0sZEVqbrp7nBTn found by cat /etc/bandit_pass/bandit17 in level 18
level 18: 
    how to connect here: ssh -i bandit17.key bandit17@bandit.labs.overthewire.org -p 2220
    how to do it: diff password.new passwords.old
    password: kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
level 19: 
    how to do it: ssh bandit18@bandit.labs.overthewire.org -p 2220 cat readme
    password: IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
level 20: 
    how to do it: ./bandit20-do, ./bandit20-do id, ls /etc/bandit_pass, cat /etc/bandit_pass/bandit20
    password: GbKksEFF4yrVs6il55v6gwY5aVje5f0j
level 21: 
    how to do it: nc -lv -p 11111 on one terminal, /suconnect 11111, send password for bandit20 and then you will get password for bandit21
    password: gE269g2h3mw3pwgrj0Ha9Uoqen1c9DGr
level 22: 
    how to do it: 
    password: 
level 23: 
    how to do it:
    password: 
level 24: 
    how to do it:
    password: 
level 25: 
    how to do it:
    password: 