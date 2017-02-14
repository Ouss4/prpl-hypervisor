
Copyright (c) 2016, prpl Foundation

Permission to use, copy, modify, and/or distribute this software for any purpose with or without 
fee is hereby granted, provided that the above copyright notice and this permission notice appear 
in all copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE
INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE 
FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM 
LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, 
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.


What is the prplHypervisor™?

The prplHypervisor™ is the industry-first open source hypervisor specifically designed to provide security 
through separation for the billions of embedded connected devices that power the Internet of Things. The MIPS 
M5150 version of the prplHypervisor™ implements MIPS VZ extensions to provide a lightweight isolation layer for
Microchip Technology’s PIC32MZ microcontrollers. In addition to real-time hardware virtualization, the prplHypervisor™ 
provides additional security services including prplPUF™ authentication and prplSecureInterVM™ communications.

The prplHypervisor™ features minimal attack surface - less than 7,000 lines of code, limited footprint – 30KB flash, 
4K RAM/VM, up to eight isolated domains. Performance tests show negligible overhead for context switching and interVM 
communications. prplHypervisor™, prplPUF™, and prplSecureInterVM™ technologies are part of the prplSecurity™ open source 
framework and are released under prpl Foundation permissive license – see http://prplfoundation.org/ip-policy.


How to build?

Once you have the building environment configured, go to a platform board folder:

prpl-hypervisor/platform/pic32mz_starter_kit;
prpl-hypervisor/platform/pic32mz_chipkit_Wifire, or;
prpl-hypervisor/platform/pic32mz_curiosity.

Then, perform:

make && make load


See the complete documentation in https://github.com/prplfoundation/prpl-hypervisor/wiki.
