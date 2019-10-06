package junit;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class AssertTrueTest {

    AssertTrueTest att;

    public boolean isPrime(int number)
    {
        for(int i = 2; i <= Math.sqrt(number); i++){
            if(number % i == 0)
                return false;
        }
        return true;
    }

    @BeforeEach
    public void beforeEach()
    {
        att = new AssertTrueTest();
    }

    @Test
    public void primeNumberTestWithCondition(){
        Assertions.assertTrue(att.isPrime(5));
    }

    @Test
    public void primeNumberTestWithConditionAndMessage(){
        Assertions.assertTrue(att.isPrime(91),"Number is not prime");
    }

    @Test
    public void primeNumberTestWithBooleanSupplier(){
        Assertions.assertTrue(() -> att.isPrime(7));
    }

    @Test
    public void primeNumberTestWithConditionSupplier(){
        Assertions.assertTrue(att.isPrime(13), () -> "Number is not primer");
    }

    @Test
    public void primeNumberWithBooleanSupplierAndMessage(){
        Assertions.assertTrue(() -> att.isPrime(17), "Number is not prime");
    }

    @Test
    public void primeNumberTestWithBooleanSupplierAndSupplier(){
        Assertions.assertTrue(() -> att.isPrime(89), () -> "Number is not prime");
    }


}
