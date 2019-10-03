package junit;

import java.util.HashMap;
import java.util.Map;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class AssertNullTest {

    AssertNullTest ant;

    public String getCapital(String country){
        Map<String, String> countryCapitalMap = new HashMap<String, String>();
        countryCapitalMap.put("Italy", "Rome");
        countryCapitalMap.put("Japan", "Tokyo");
        countryCapitalMap.put("Zimbabwe", "Harare");
        countryCapitalMap.put("Belgium", "Brussels");
        return countryCapitalMap.get(country);
    }

    @BeforeEach
    public void beforeEachTest()
    {
        ant = new AssertNullTest();
    }

    @Test
    public void testIndia(){
        String capitalIndia = ant.getCapital("India");
        Assertions.assertNull(capitalIndia);
    }

    @Test
    public void testUSA(){
        String capitalUSA = ant.getCapital("USA");
        Assertions.assertNull(capitalUSA, "Capital should be null");
    }

    @Test
    public void testJapan(){
        String capitalJapan = ant.getCapital("Japan");
        Assertions.assertNull(capitalJapan, () -> "Capital should be null");
    }

}
