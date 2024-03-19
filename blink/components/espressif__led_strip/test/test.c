/* test_mean.c: Implementation of a testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <limits.h>
#include "unity.h"
#include "driver/gpio.h"

TEST_CASE("GPIO pin 2 high", "[mean]")
{
    int state=gpio_get_level(2);
    TEST_ASSERT_EQUAL(1,state);
}
