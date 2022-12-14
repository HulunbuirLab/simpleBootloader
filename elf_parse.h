#ifndef ELF_PARSE_H_INCLUDED
#define ELF_PARSE_H_INCLUDED

#include <efi.h>
#include <efilib.h>

#ifndef _ELF_PARSE_H
#define _ELF_PARSE_H

EFI_STATUS load_kernel(CHAR16 *kernel_fname, OUT void **entry_address);
#endif

#endif // ELF_PARSE_H_INCLUDED
