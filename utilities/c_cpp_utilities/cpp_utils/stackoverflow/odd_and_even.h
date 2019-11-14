
void oddNumbersForLoop(){
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 1)
        {
            printf(" %d ", i);
        }
    }
}

void oddNumbersWhileLoop(){
    int i = 1;
    while (i <= 100){
        if (i % 2 == 1)
        {
            printf(" %d ", i);
        }
        i++;
    }
}

void evenNumbersForLoop(){
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
    }
}

void evenNumbersWhileLoop(){
    int i = 1;
    while (i <= 100){
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i++;
    }
}
