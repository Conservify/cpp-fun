#include <array>

#include <Arduino.h>

template<size_t N>
class Container {
private:
    std::array<uint8_t, N> &values;

public:
    Container(std::array<uint8_t, N> values) : values(values) {
    }

    void print() {
        for (auto value : values) {
            Serial.println(value);
        }
    }
};

void setup() {
    Serial.begin(115200);
    while (!Serial) {
        delay(10);
    }

    std::array<uint8_t, 3> values = {
        1, 2, 3
    };

    Container<3> c(values);
    c.print();
}

void loop() {
}
