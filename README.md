# libpi
`libepi` calculates an approximation of ![](http://www.sciweavers.org/tex2img.php?eq=%20%5Cpi%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0).

### Method
The approximation is done using [Nilakantha Series](https://en.wikipedia.org/wiki/Pi)

![](http://www.sciweavers.org/tex2img.php?eq=%20%5Cpi%20%3D%203%20%2B%20%20%5Cfrac%7B4%7D%7B2%20%20%5Ctimes%203%20%5Ctimes%204%7D%20-%20%20%5Cfrac%7B4%7D%7B4%20%20%5Ctimes%205%20%5Ctimes%206%7D%20%2B%20%5Cfrac%7B4%7D%7B6%20%20%5Ctimes%207%20%5Ctimes%208%7D%20-%20%5Cfrac%7B4%7D%7B8%20%20%5Ctimes%209%20%5Ctimes%2010%7D%20%2B%20...&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0).

### Build
* `git clone git@github.com:mathinjenkins/libpi.git`
* `cd libpi`
* `mkdir build && cd build`
* `cmake ../`
* `make`
* `./test/pi_test`

### License
[MIT License](https://github.com/mathinjenkins/libpi/blob/master/LICENSE)
