// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_PUSHBUTTONHANDLER_H
#define TATAILLE_PUSHBUTTONHANDLER_H


namespace tataille
{
   class PushButtonHandler
   {
   public:
      virtual ~PushButtonHandler() {}
      
      virtual void pushButtonClicked() = 0;
   };
}
