package junit;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class AssertFalseTest {

    AssertFalseTest att;

    public boolean isPalindrome(String str)
    {
        for(int i = 0, j = str.length()-1; i <str.length()/2; i++, j--)
        {
            if(str.charAt(i)!=str.charAt(j))
            {
                return false;
            }
        }
        return true;
    }

    @BeforeEach
    public void beforeEachTest()
    {
        att = new AssertFalseTest();
    }

    @Test
    public void palindromeTestWithCondition(){
        Assertions.assertFalse(att.isPalindrome("ADAM"));
    }

    @Test
    public void palindromeTestWithConditionAndMessage(){
        Assertions.assertFalse(att.isPalindrome("MADAM"), "String is palindrome");
    }

    @Test
    public void palindromeTestWithBooleanSupplier(){
        Assertions.assertFalse(() -> att.isPalindrome("ASDAS"));
    }

    @Test
    public void palindromeTestWithConditionAndSupplier(){
        Assertions.assertFalse(att.isPalindrome("LEVEL"), () -> "String is palindrome");
    }

    @Test
    public void palindromeTestWithBooleanSupplierAndMessage(){
        Assertions.assertFalse(() -> att.isPalindrome("PLAN"), "String is palindrome");
    }

    @Test
    public void palindromeTestWithBooleanSupplierAndSupplier(){
        Assertions.assertFalse(() -> att.isPalindrome("RADAR"), () -> "String is palindrome");
    }


}
