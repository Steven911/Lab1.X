CONVERSOR:
    MOVFW   CONT1
    MOVWF   X
    INCF    UNI
    DECFSZ  X
    GOTO    NO
     
    
    RETURN
    
NO:   
    INCF    UNI
    MOVLW   .10
    XORWF   UNI,W
    BTFSS   STATUS,2   ;SI BIT 2 DEL REGISTRO UNIDAD ES 1, ENTONCES SALTA A INC LAS DEC, SI ES 0, REGRESA A INC LAS UNIDADES
    GOTO    $-7
    
    CLRF    UNI
    INCF    DEC
    
    MOVLW   .10
    XORWF   DEC,W
    BTFSS   STATUS,2
    GOTO    $-6
    
    CLRF    UNI
    CLRF    DEC
    INCF    CEN
    
    MOVLW   .10
    XORWF   CEN,W
    BTFSS   STATUS,2
    GOTO    $-7
    CLRF    UNI
    CLRF    DEC
    CLRF    CEN

RETURN