push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "standing_stone3_desert",
   descname = _ "Standing Stone",
   size = "big",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 25, 28 },
      },
   }
}

pop_textdomain()
