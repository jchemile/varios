package junit;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.condition.DisabledIfSystemProperty;
import org.junit.jupiter.api.condition.EnabledIfSystemProperty;
import java.util.Properties;

public class SystemProperty {

    @Test
    @EnabledIfSystemProperty(named = "java.vm.name", matches = ".*OpenJDK.*")
    void onOpenJDK(){
        System.out.println("Run this on OPENJDK!");
    }

    @Test
    @DisabledIfSystemProperty(named = "user.country", matches = "MY")
    void notOnCountryMalasia(){
        System.out.println("DO not run this on country code MY");
    }

    @Test
    void printSystemProperties(){
        Properties properties = System.getProperties();
        properties.forEach((k,v) -> System.out.println(k + ":" + v));
    }
}
