VER:
    MOVFW   DEC
    MOVWF   A
    SWAPF   A
    MOVFW   UNI
    IORWF   A,W
    MOVWF   PORTB
    MOVFW   CEN
    MOVWF   PORTC
    
    CLRF    UNI
    CLRF    DEC
    CLRF    CEN
RETURN
    
    

