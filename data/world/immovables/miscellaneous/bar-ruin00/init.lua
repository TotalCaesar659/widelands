push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "bar-ruin00",
   descname = _ "Ruin",
   size = "small",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 34, 32 },
      },
   }
}

pop_textdomain()
