
/*
 Copyright (C) 2004 StatPro Italia srl

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it under the
 terms of the QuantLib license.  You should have received a copy of the
 license along with this program; if not, please email quantlib-dev@lists.sf.net
 The license is also available online at http://quantlib.org/html/license.html

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#ifndef quantlib_test_money_hpp
#define quantlib_test_money_hpp

#include <boost/test/unit_test.hpp>

/*! \class QuantLib::Money <ql/money.hpp>

    \test money arithmetic is tested with and without currency conversions.
*/

class MoneyTest {
  public:
    static void testNone();
    static void testBaseCurrency();
    static void testAutomated();
    static boost::unit_test_framework::test_suite* suite();
};


#endif
