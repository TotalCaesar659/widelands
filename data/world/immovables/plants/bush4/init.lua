push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "bush4",
   descname = _ "Bush",
   size = "none",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 12, 10 },
      },
   }
}

pop_textdomain()
