// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_CHECKBOXHANDLER_H
#define TATAILLE_CHECKBOXHANDLER_H


namespace tataille
{
   class CheckBoxHandler
   {
   public:
      virtual ~CheckBoxHandler() {}
      
      virtual void checkBoxToggled(bool isChecked) = 0;
   };
}
