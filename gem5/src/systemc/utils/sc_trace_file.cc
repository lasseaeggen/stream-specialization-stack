/*
 * Copyright 2018 Google, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Gabe Black
 */

#include "base/logging.hh"
#include "systemc/ext/utils/sc_trace_file.hh"

namespace sc_core
{

sc_trace_file *
sc_create_vcd_trace_file(const char *name)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
    return nullptr;
}

void
sc_close_vcd_trace_file(sc_trace_file *tf)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_write_comment(sc_trace_file *tf, const std::string &comment)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const bool &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const bool *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const float &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const float *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const double &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const double *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_logic &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_logic *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_int_base &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_int_base *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_uint_base &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_uint_base *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_signed &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_signed *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_unsigned &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_unsigned *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_bv_base &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_bv_base *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_lv_base &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_lv_base *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxval &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxval *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxval_fast &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxval_fast *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxnum &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxnum *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxnum_fast &, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::sc_fxnum_fast *, const std::string &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const char &, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const char *, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const short &, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const short *, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const int &, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const int *, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const long &, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const long *, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::int64 &, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::int64 *, const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::uint64 &,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_dt::uint64 *,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_signal_in_if<char> &,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_signal_in_if<short> &,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_signal_in_if<int> &,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_trace(sc_trace_file *, const sc_signal_in_if<long> &,
         const std::string &, int width)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

} // namespace sc_core
