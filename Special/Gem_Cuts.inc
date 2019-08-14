/*

From a file called Gems.inc. Creator unknown. Anyone who recognice this?

Contains:
    Brillant57
    Brillant58
    Stairs
    Square_Stairs
    Emerald_Stairs
    Cabochon


If you want to calculate the carat weight of a gem, here is some formulaes (S.G. = Spesific Gravity):
    Round faceted stones: Diameter squared x depth x S.G. x .0018 = carat wt.
    Oval faceted stones: Diameter squared x depth x S.G. x .002 = carat wt.
    Emerald cut faceted stones: Length x width x depth x S.G. x .0025 = carat wt.
    Rectangular faceted stones: Length x width x depth x S.G. x .0026 = carat wt.
    Square cut faceted stones: Length x width x depth x S.G. x .0023 = carat wt.
    Marquise cut stones, (navette): Length x width x depth x S.G. x .0016 = carat wt.
    Pear cut stones: Length x width x depth x S.G. x .00175 = carat wt.
    Square cushions:(avg. corner meas.& belly meas. for dia.) Diameter squared x depth x S.G. x .0018 = carat wt.
    Rectangular Cushions:(avg. L & W for dia.) Diameter squared x depth x S.G. x .0022 = carat wt.
    Square step cut stones:(avg. both meas. for dia.) Diameter squared x depth x S.G. x .0023 = carat wt.
    Rectangular step cut stones: Length x width x depth x S.G. x .0025 = carat wt.
    Cabochon cut stones: Length x width x depth x S.G. x .0027 = carat wt.

*/

/////////////
// Objects //
/////////////
#declare Brillant57 =
difference {
  intersection {
    union {
      cone { <0, -2, 0> 0 <0, 0, 0> 1 }
      cone { <0, 2, 0> 0 <0, 0, 0> 1 }
    }
  cylinder { <0, -4, 0> <0, 4, 0> 0.97 }
  }
  union {
    box { <-4, 0.324, -4> <4, 4, 4> }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -34.50>
        translate <1, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 34.50>
        translate <-1, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-34.50, 0, 0>
        translate <0, 0, -1>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <34.50, 0, 0>
        translate <0, 0, 1>
      }
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -34.50>
        translate <1, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 34.50>
        translate <-1, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-34.50, 0, 0>
        translate <0, 0, -1>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <34.50, 0, 0>
        translate <0, 0, 1>
      }
      rotate <0, 45, 0>
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -40.75>
        translate <-1, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 40.75>
        translate <1, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-40.75, 0, 0>
        translate <0, 0, 1>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <40.75, 0, 0>
        translate <0, 0, -1>
      }
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -40.75>
        translate <-1, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 40.75>
        translate <1, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-40.75, 0, 0>
        translate <0, 0, 1>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <40.75, 0, 0>
        translate <0, 0, -1>
      }
      rotate <0, 45, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -22>
        translate <1.285, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 22>
        translate <-1.285, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-22, 0, 0>
        translate <0, 0, -1.285>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <22, 0, 0>
        translate <0, 0, 1.285>
      }
      rotate <0, -22.5, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -22>
        translate <1.285, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 22>
        translate <-1.285, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-22, 0, 0>
        translate <0, 0, -1.285>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <22, 0, 0>
        translate <0, 0, 1.285>
      }
      rotate <0, 22.5, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -40>
        translate <0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 40>
        translate <-0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-40, 0, 0>
        translate <0, 0, -0.98>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <40, 0, 0>
        translate <0, 0, 0.98>
      }
      rotate <0, -11.25, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -40>
        translate <0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 40>
        translate <-0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-40, 0, 0>
        translate <0, 0, -0.98>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <40, 0, 0>
        translate <0, 0, 0.98>
      }
      rotate <0, -33.75, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -40>
        translate <0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 40>
        translate <-0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-40, 0, 0>
        translate <0, 0, -0.98>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <40, 0, 0>
        translate <0, 0, 0.98>
      }
      rotate <0, 11.25, 0>
    }
    union {
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, -40>
        translate <0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <0, 0, 40>
        translate <-0.98, 0, 0>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <-40, 0, 0>
        translate <0, 0, -0.98>
      }
      box { <-4, 0, -4> <4, 4, 4>
        rotate <40, 0, 0>
        translate <0, 0, 0.98>
      }
      rotate <0, 33.75, 0>
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -42.5>
        translate <-0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 42.5>
        translate <0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-42.5, 0, 0>
        translate <0, 0, 0.982>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <42.5, 0, 0>
        translate <0, 0, -0.982>
      }
      rotate <0, -11.25, 0>
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -42.5>
        translate <-0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 42.5>
        translate <0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-42.5, 0, 0>
        translate <0, 0, 0.982>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <42.5, 0, 0>
        translate <0, 0, -0.982>
      }
      rotate <0, -33.75, 0>
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -42.5>
        translate <-0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 42.5>
        translate <0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-42.5, 0, 0>
        translate <0, 0, 0.982>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <42.5, 0, 0>
        translate <0, 0, -0.982>
      }
      rotate <0, 11.25, 0>
    }
    union {
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, -42.5>
        translate <-0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <0, 0, 42.5>
        translate <0.982, 0, 0>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <-42.5, 0, 0>
        translate <0, 0, 0.982>
      }
      box { <-4, -4, -4> <4, 0, 4>
        rotate <42.5, 0, 0>
        translate <0, 0, -0.982>
      }
      rotate <0, 33.75, 0>
    }
  }
  bounded_by {
    sphere { <0, 0, 0> 1 }
  }
}

#declare Brillant58 =
difference {
  object { Brillant57 }
  box { <-4, -4, -4> <4, -0.82, 4> }
  bounded_by {
    sphere { <0, 0, 0> 1 }
  }
}

#declare Stairs =
difference {
  box { <-1.8, -1.0, -1.3> <1.8, 1.0, 1.3> }
  union {
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 0>
      translate <0, 0.4, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.8, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -40>
      translate <1.8, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -30>
      translate <1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -17>
      translate <2.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <40, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-40, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <30, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-30, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <17, 0, 0>
      translate <0, 0, 1.9>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-17, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 50>
      translate <1.8, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.8, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 40>
      translate <1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 27>
      translate <2.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <50, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-50, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <40, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-40, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <27, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-27, 0, 0>
      translate <0, 0, 1.9>
    }
  }
  bounded_by {
    box { <-1.9, -1.0, -1.4> <1.9, 1.0, 1.4> }
  }
}


#declare Square_Stairs =
difference {
  box { <-1.3, -1.0, -1.3> <1.3, 1.0, 1.3> }
  union {
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 0>
      translate <0, 0.4, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.3, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -40>
      translate <1.3, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -30>
      translate <1.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -17>
      translate <1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <40, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-40, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <30, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-30, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <17, 0, 0>
      translate <0, 0, 1.9>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-17, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 50>
      translate <1.3, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.3, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 40>
      translate <1.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 27>
      translate <1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <50, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-50, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <40, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-40, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <27, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-27, 0, 0>
      translate <0, 0, 1.9>
    }
  }
  bounded_by {
    box { <-1.4, -1.0, -1.4> <1.4, 1.0, 1.4> }
  }
}

#declare Emerald_Stairs =
difference {
  box { <-1.8, -1.0, -1.3> <1.8, 1.0, 1.3> }
  union {
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 0>
      translate <0, 0.4, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.8, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -40>
      translate <1.8, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -30>
      translate <1.9, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, -17>
      translate <2.4, 0, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <40, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-40, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <30, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-30, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <17, 0, 0>
      translate <0, 0, 1.9>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <-17, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 50>
      translate <1.8, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.8, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 40>
      translate <1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.9, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, 27>
      translate <2.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.4, 0, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <50, 0, 0>
      translate <0, 0, -1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-50, 0, 0>
      translate <0, 0, 1.3>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <40, 0, 0>
      translate <0, 0, -1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-40, 0, 0>
      translate <0, 0, 1.4>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <27, 0, 0>
      translate <0, 0, -1.9>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <-27, 0, 0>
      translate <0, 0, 1.9>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.65, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.65, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.65, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 40>
      translate <-1.65, 0, 0>
      rotate <0, -135, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.75, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.75, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.75, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 30>
      translate <-1.75, 0, 0>
      rotate <0, -135, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.25, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.25, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.25, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, 0, -3> <3, 3, 3>
      rotate <0, 0, 17>
      translate <-2.25, 0, 0>
      rotate <0, -135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.65, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.65, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.65, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -50>
      translate <-1.65, 0, 0>
      rotate <0, -135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.75, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.75, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.75, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -40>
      translate <-1.75, 0, 0>
      rotate <0, -135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.25, 0, 0>
      rotate <0, 45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.25, 0, 0>
      rotate <0, -45, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.25, 0, 0>
      rotate <0, 135, 0>
    }
    box { <-3, -3, -3> <3, 0, 3>
      rotate <0, 0, -27>
      translate <-2.25, 0, 0>
      rotate <0, -135, 0>
    }
  }
  bounded_by {
    box { <-1.9, -1.0, -1.4> <1.9, 1.0, 1.4> }
  }
}

#declare Cabochon =
intersection {
  sphere { <0, 0, 0> 1 }
  box { <-1.1, 0, -1.1> <1.1, 1.1, 1.1> }
  scale <1, 0.5, 1>
}
