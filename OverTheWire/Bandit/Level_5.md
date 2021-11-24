## Level 5

*The password for the next level is stored in the only human-readable file in the inhere directory. Tip: if your terminal is messed up, try the “reset” command..*

`username:` ssh bandit.labs.overthewire.org -p 2220 -l bandit4

`password:` pIwrPrtPN36QITSp3EQaw936yaFoFgAB

- *Solution*:
    * Use command `ls` to view the files in the working directory
    * The file is situated in the only human readable file, so use command `file ./*` to each of the files' type
    * -file07 is the only ASCII one
    * Just `cat -file07`

- `Level 5:` koReBOKuIDDepwhWk7jZC0RTdopnAYKh