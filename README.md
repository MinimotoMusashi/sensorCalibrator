At work we had an issue with calibrating control apparatuses (RTDs and various transducers). We were not able to adjust raw count values due to these values being utilized elsewhere in the plc logic. To accommodate for sensor inaccuracies we were taking guesses adjusting the minimum or maximum EU value to get the sensor to read accurately. I built a simple application using C++ and QT Creator, to allow us to input relevant information, and after performing the calculations, output exact EU minimum and EU maximum values to get an accurate scaled feedback on the HMI.