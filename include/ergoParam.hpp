#ifndef ERGOPARAM_HPP
#define ERGOPARAM_HPP

#include <map>
#include <string>

/** \brief Class to define operator less for strings.
 *
 * \brief Class to define perator less for strings.
 */
class strless {
public:
  /** \brief Operator less for strings.
   *
   * \brief Operator less for strings.
   */
  bool operator() (const std::string &s1, const std::string &s2 ) const  { 
    return s1 < s2; 
  }
};

/** \brief Map type for parameters.
 *
 * Map type for parameters with string as key and double as values.
 */
typedef std::map<std::string, double, strless> param;

#endif
