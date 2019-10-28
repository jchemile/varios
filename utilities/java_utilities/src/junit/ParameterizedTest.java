package junit;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.EnumSource;

import java.time.Month;

public class ParameterizedTest {

    @CsvSource({
            "a,A",
            "b,B",
            "bbb,BBB",
            "bBbB,BBBB"
    })


    @EnumSource(Month.class) // passing all 12 months
    void getValueForAMonth_IsAlwaysBetweenOneAndTwelve(Month month) {
        int monthNumber = month.getValue();
        Assertions.assertTrue(monthNumber >= 1 && monthNumber <= 12);
    }

}
