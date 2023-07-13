# SpliTech2023

This documentation provides an overview regarding [IoT Day WORKSHOP](https://iotday.splitech.org/), the first significant event of [SpliTech2023](https://2023.splitech.org/home) conference held on June 20<sup>th</sup>, 2023. The event was conceptualized as a tutorial session, dedicated to a specific IoT Topic entitled "_Design and development of an IoT learning system for health-related applications_".

The session combines academic concepts with practical exercises in a hands-on approach to deploy the theoretical knowledge acquired into a practical use case. Attendees are encouraged to realize their own prototypes based on provided hands-on experience, while future development possibilities could be explored respectively.

More about the project could be found in the paper:

[**M. Medojevic et al. (2023), _Design and development of an IoT learning system for health-related applications_, Proceedings of the 8<sup>th</sup> International Conference on Smart and Sustainable Technologies - Splitech 2023, June 20-23, 2023, Split - Bol, Croatia. IEEE Catalog No.: CFP23F09-USB, ISBN: 978-953-290-127-6**](https://github.com/EnergyPulse/SpliTech2023/blob/main/Design%20and%20development%20of%20an%20IoT%20learning%20system%20for%20health-related%20applications.pdf)

# WORKSHOP OVERVIEW

The proposed IoT learning system is being recognized as a through-hole module integration board, aimed to enable learners with practical HW assembly experience as well as firmware development. 

Learners familiarize themselves with each component, its purpose, and functionality, that is, in a logical sequence, they build a system that will finally be unified by firmware development. 

The main functionalities learners can develop during the practical training are as follows:

- To measure atmospheric pressure, dry bulb temperature, and relative humidity,
- To measure conduction-based body temperature,
- To measure heart rate and the saturation of oxygen in the blood,
- To initiate/terminate measurement via a touch sensor,
- To establish RGB LED indication signaling,
- To correlate measurements and time units,
- To establish a data acquisition and storage system of time series data locally,
- To print the desired data on display,
- To transfer data via Wi-Fi network, and
- To link the developed system with the Blynk platform.

# Workshop providers' contact information:
 
[Milovan Medojevic](https://www.linkedin.com/in/milovan-medojevic/)

[Marko Vasiljevic-Toskic](https://www.linkedin.com/in/marko-vasiljevic-toskic-895588151/)

# The PCB (IoT Day WORKSHOP)

The general outlook of the integrational PCB, developed for this workshop, is given below:

![PCB labeled - fin](https://github.com/EnergyPulse/SpliTech2023/assets/135071946/ce7c2356-9d51-4a00-bfe3-eb472ee6a9f0)

Feel free to refer to the [paper](https://github.com/EnergyPulse/SpliTech2023/blob/main/Design%20and%20development%20of%20an%20IoT%20learning%20system%20for%20health-related%20applications.pdf) to familiarize with the concept, PCB schematic and module-related datasheets.

## PCB ASSEMBLY

The PCB Assembly is performed in an easy manner by placing the through-hole modules in adequate headers provided on the board. Please refer to the image above to check and follow the provided pinout.
The image below illustrates the step-by-step positioning of the modules onto the PCB:

![PCB Assembly](https://github.com/EnergyPulse/SpliTech2023/assets/135071946/360691b1-045a-4ad4-9f51-d3f68c684465)

## Programming Environment

- For the purpose of Workshop execution Arduino IDE version 1.8.13 was used. 
- This version could be downloaded from the official [webpage](https://www.arduino.cc/en/software/OldSoftwareReleases).

## How to Install FTDI Drivers

- For most late versions of Windows, the hardware may work fine without any driver needing to be installed. 
- If you however can't locate a COM port for your hardware, then the set of instructions provided [here](https://learn.sparkfun.com/tutorials/how-to-install-ftdi-drivers/windows---quick-and-easy) could ensure the possible fix.
- The FTDI driver used at the Workshop is **cdm21228**.

## Note

For the **DS18b20 temp probe** utilization, the middle pin of sensor DS18b20 on board must be short-connected with one of the available pins: GPIO23, GPIO15, GPIO26.

# The Name Tag / Conference Accreditation project

All of the registered participants of the SpliTech2023 Conference were provided with the PCB as a part of their conference accreditation (name tag) badge.
This PCB looks like this:

![ACR FIN](https://github.com/EnergyPulse/SpliTech2023/assets/135071946/0dd75852-6d21-4aa7-850f-f45bd01f3235)

Use the provided [examples](https://github.com/EnergyPulse/SpliTech2023/tree/main/IoT_Workshop_Examples) to start your own prototyping.












