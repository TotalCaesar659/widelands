push_textdomain("world")

dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "track_winter",
   -- TRANSLATORS: This track is made of footprints in the snow
   descname = _ "Track",
   size = "none",
   programs = {},
   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 30, 15 },
      },
   }
}

pop_textdomain()
