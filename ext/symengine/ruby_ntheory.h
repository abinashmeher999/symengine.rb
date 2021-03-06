#ifndef RUBY_NTHEORY_H_
#define RUBY_NTHEORY_H_

#include <ruby.h>
#include <symengine/cwrapper.h>

#include "symengine.h"
#include "ruby_basic.h"
#include "symengine_utils.h"

VALUE cntheory_gcd(VALUE self, VALUE operand1, VALUE operand2);
VALUE cntheory_lcm(VALUE self, VALUE operand1, VALUE operand2);
VALUE cntheory_nextprime(VALUE self, VALUE operand1);
VALUE cntheory_mod(VALUE self, VALUE operand2);
VALUE cntheory_quotient(VALUE self, VALUE operand1, VALUE operand2);
VALUE cntheory_fibonacci(VALUE self, VALUE operand1);
VALUE cntheory_lucas(VALUE self, VALUE operand1);
VALUE cntheory_binomial(VALUE self, VALUE operand1, VALUE operand2);

#endif // RUBY_NTHEORY_H_
