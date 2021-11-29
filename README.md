# How to compile:
run this on your project directory:
```
bison -d parser.y
flex lexer.l
gcc -o dnl parser.tab.c lex.yy.c 
./dnl example.dnl
```
