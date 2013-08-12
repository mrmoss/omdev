#ifndef  __FREEGLUT_H__
#define  __FREEGLUT_H__

//Hacked by Mike Moss to make it work...

/*
 * freeglut.h
 *
 * The freeglut library include file
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * PAWEL W. OLSZTA BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "freeglut_std.h"
#include "freeglut_ext.h"

#if(!defined(_WIN32)||defined(__CYGWIN__))
	#include <unistd.h>
	#include <fcntl.h>
#endif

/*** END OF FILE ***/

#endif /* __FREEGLUT_H__ */