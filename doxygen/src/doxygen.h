/*!
 \brief namespace description 
 \details namespace details 
*/
namespace Doxygen {
  /// example enum
  enum Color {
    RED, ///< first
    GREEN, ///< second
    BLUE ///< third
  };

  /// \brief test class
  class Test_class {
    public:
      /// \brief default constructor
      Test_class() {

      }

    /// \brief default destructor
    ~Test_class() {

    }

    /*!  \brief a function that takes two arguments 

         \param a an integer argument
         \param flag a boolean argument
        */
    void Test_function(int a, bool flag) {

    }

    int Variable; ///< public variable

  };
}