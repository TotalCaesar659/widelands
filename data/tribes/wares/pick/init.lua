push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "pick",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "Pick"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 5, 4 },
      },
   }
}

pop_textdomain()
