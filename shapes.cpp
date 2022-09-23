#include <iostream>

std::string create_box(int w, int h)
{
  std::string box = "";
  for(int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      box += "*";
    }
    box += "\n";
  }
  return box;
}
std::string create_checkerboard(int w, int h)
{
  std::string checkerboard = "";
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if (i % 2 == 0){
	if (j % 2 == 0){
	  checkerboard += "*";
	} else {
	  checkerboard += " ";
	}
      } else {
	if (j % 2 == 0){
	  checkerboard += " ";
	} else {
	  checkerboard += "*";
	}
      }
    }
    checkerboard += "\n";
  }
  return checkerboard;
}

std::string create_cross(int size)
{
  std::string cross = "";
  //if (size % 2 == 0){
    //top
    int top_size = (size - 2) / 2;
    if (size % 2 == 1){
      top_size++;
    }
    for (int i = top_size; i > 0; i--){
      for (int j = 0; j < top_size - i; j++){
	cross += " ";
      }
      cross += "*";
      for (int j = 0; j < i; j++){
	cross += "  ";
      }
      cross += "*\n";
    }
    if (size % 2 == 0){
      
      if (size > 1){
	for (int i = 0; i < top_size; i++){
	  cross += " ";
	}
	cross += "**\n";
      }
    }
    //bottom
    int bottom_size = top_size;
    if (size > 1){
      for (int i = 0; i < bottom_size; i++){
	cross += " ";
      }
      cross += "**\n";
    }
    for (int i = 0; i < bottom_size; i++){
      for (int j = 0; j < bottom_size - i - 1; j++){
	cross += " ";
      }
      cross += "*";
      for (int j = 0; j <= i; j++){
	cross += "  ";
      }
      cross += "*\n";
    }
    //}
  return cross;
}
	  

std::string create_lower_triangle(int size)
{
  std::string shape = "";
  for (int i = 0; i < size; i++){
    for (int j = 0; j <= i; j++){
      shape += "*";
    }
    shape += "\n";
  }
  return shape;
}

std::string create_upper_triangle(int size)
{
  std::string shape = "";
  for (int i = 0; i < size; i++){
    for (int j = 0; j < i; j++){
      shape += " ";
    }
    for (int j = 0; j < size - i; j++){
      shape += "*";
    }
    shape += "\n";
  }
  return shape;
  
}

std::string create_trapezoid(int w, int h)
{
  std::string shape = "";
  int spaces = 0;
  int stars = w;

  for (int i = 0; i < h; i++){
    if (stars > 0){
      for (int j = 0; j < spaces; j++){
        shape += " ";
      }
      for (int j = 0; j < stars; j++){
        shape += "*";
      }
      stars -= 2;
      spaces++;
      shape += "\n";
    } else {
      return "Impossible shape!";
    }
  }
    return shape;
}

std::string create_checkerboard2 (int w, int h)
{
  std::string shape = "";

  int count = 0;
  int count_horizontal = 0;
  bool is_dark_horizontal = true;
  bool is_dark = true;
  for (int i = 0; i < h; i++){
    if (is_dark){
      //std::cout << "*";
      //start with *
      count_horizontal = 0;
      is_dark_horizontal = true;
      for (int j = 0; j < w; j++){
	if (is_dark_horizontal) {
	  shape += "*";
	} else {
	  shape += " ";
	}
	
	count_horizontal++;
	if (count_horizontal == 3){
	  count_horizontal = 0;
	  is_dark_horizontal = !is_dark_horizontal;
	}
      }
	
    } else {
      //std::cout << " ";
      
      //start with " "
      count_horizontal = 0;
      is_dark_horizontal = false;

      for (int j = 0; j <w; j++){
	if (is_dark_horizontal){
	  shape += "*";
	} else {
	  shape += " ";
	}
	count_horizontal++;

	if (count_horizontal == 3){
	  count_horizontal = 0;
	  is_dark_horizontal = !is_dark_horizontal;
	}
      }
    }
    count++;
    if (count == 3){
      count = 0;
      is_dark = !is_dark;
    }
    shape += "\n";
  }
  
  count++;
  if (count == 3){
    count = 0;
    is_dark = is_dark;
  }

    
  return shape;
}
      
