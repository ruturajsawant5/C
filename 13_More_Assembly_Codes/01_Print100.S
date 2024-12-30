.section .note.GNU-stack,"",@progbits #For 64 bit thing

.section .rodata
    msgP1:
        .string "Number = %d\n"

.section .data
    num:
        .int 100

.section .text
.globl main # can be accessed outside file
main:
    #PROLOGUE
    pushl %ebp
    movl %esp, %ebp

    pushl num
    pushl $msgP1
    call printf
    addl $8, %esp

    #EPILOGUE
    #return 0
    movl $0, %eax
    movl %ebp, %esp
    popl %ebp
    ret



#for 32 bit
# gcc -o print HelloWorld.S 
#for 64 bit
#sudo apt install gcc-multilib g++-multilib
#gcc -m32 -no-pie -o print HelloWorld.S