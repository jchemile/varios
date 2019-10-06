package junit;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class AssertEqualsTest {

    AssertEqualsTest aet;

    @BeforeEach
    public void beforeEachTest()
    {
        aet = new AssertEqualsTest();
    }

    public double getSquareRoot(double num)
    {
        return Math.sqrt(num);
    }

    @Test
    public void testSquareRootOf25(){
        double squareRoot25 = aet.getSquareRoot(25);
        Assertions.assertEquals(5, squareRoot25, "5 should be square root of 5");
    }

    @Test
    public void testSquareRootOf5(){
        double squareRoot5 = aet.getSquareRoot(5.0);
        Assertions.assertEquals(2.236, squareRoot5, "Square Root of 5 is incorrect");
    }

    @Test
    public void testSquareRootOf5WithDelta(){
        double squareRoot5 = aet.getSquareRoot(5.0);
        Assertions.assertEquals(2.236, squareRoot5, 0.001,"Square root of 5 is incorrect");
    }

}
