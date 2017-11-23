#include <Arduino.h>

class Container {
private:
    uint8_t *values;
    const size_t numberOfValues;

public:
    template<size_t N>
    Container(uint8_t (&values)[N]) : values(values), numberOfValues(N) {
    }

    void print() {
        for (size_t i = 0; i < numberOfValues; ++i) {
            Serial.println(values[i]);
        }
    }
};

void setup() {
    uint8_t values[] = {
        1, 2, 3
    };

    Container c(values);
    c.print();
}

void loop() {
}
