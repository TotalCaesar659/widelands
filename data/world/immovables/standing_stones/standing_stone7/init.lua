push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "standing_stone7",
   descname = _ "Standing Stone",
   size = "none",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 7, 63 },
      },
   }
}

pop_textdomain()
