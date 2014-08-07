// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_COMBOBOXHANDLER_H
#define TATAILLE_COMBOBOXHANDLER_H


namespace tataille
{
   class ComboBoxHandler
   {
   public:
      virtual ~ComboBoxHandler() {}
      
      virtual void comboBoxItemSelected(int itemIndex) = 0;
   };
}
