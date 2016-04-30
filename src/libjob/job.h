/*
 * Copyright (c) 2016 Mark Heily <mark@heily.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef LIBJOB_JOB_H_
#define LIBJOB_JOB_H_

struct job;

#ifdef __cplusplus

#include <string>

#include "logger.h"

class LibJob {
public:
	LibJobLogger logger;

	std::string version = "0.0.0";

	/** Directory where users submit job configuration files */
	std::string jobdir;

	LibJob();

private:
	void set_jobdir();
};
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct libjob;

struct libjob * libjob_new(void);

#ifdef __cplusplus
}
#endif

#endif /* SOCKET_H_ */
