## Level 4

*The password for the next level is stored in a hidden file in the inhere directory.*

`username:` ssh bandit.labs.overthewire.org -p 2220 -l bandit3

`password:` UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

- *Solution*:
    * Use command `ls` to view the files in the working directory
    * Use command `cd inhere`
    * Use command `ls -a` to view all hidden files
    * `cat .hidden` and you get the next password!

- `Level 5:` pIwrPrtPN36QITSp3EQaw936yaFoFgAB

[Back](../)
