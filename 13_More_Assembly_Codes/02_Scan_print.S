#int n = 0;
#int main(void)
#{
#    printf("Enter n:");
#    scanf("%d", &n);
#    printf("n=%d\n", n);
#    return 0;
#}

.section .note.GNU-stack,"",@progbits #For 64 bit thing

.section .rodata
    msgP1:
        .string "Enter n:"
    msgP2:
        .string "%d"
    msgP3:
        .string "n=%d\n"

.section .data
    n:
        .int 0

.section .text
.globl main # can be accessed outside file
main:
    #PROLOGUE
    pushl %ebp
    movl %esp, %ebp

    pushl $msgP1
    call printf
    addl $4, %esp

    pushl $n #$n = &n 
    pushl $msgP2
    call scanf
    addl $8, %esp

    pushl n 
    pushl $msgP3
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
#gcc -m32 -no-pie -o scan_print 02_Scan_print.S