# libpi
`libpi` calculates an approximation of ![](http://www.sciweavers.org/tex2img.php?eq=%20%5Cpi%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0).

### Method
The approximation is done using [Nilakantha Series](https://en.wikipedia.org/wiki/Pi)

![](doc/pi.png).

### Build
* `git clone git@github.com:mathinjenkins/libpi.git`
* `cd libpi`
* `mkdir build && cd build`
* `cmake ../`
* `make`
* `./test/pi_test`

### License
[MIT License](https://github.com/mathinjenkins/libpi/blob/master/LICENSE)
