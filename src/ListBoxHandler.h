// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_LISTBOXHANDLER_H
#define TATAILLE_LISTBOXHANDLER_H


namespace tataille
{
   class ListBoxHandler
   {
   public:
      virtual ~ListBoxHandler() {}
      
      virtual void listBoxItemSelected(int itemIndex) = 0;
   };
}
